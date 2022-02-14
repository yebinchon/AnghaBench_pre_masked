
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* ush ;
typedef int ulg ;
struct TYPE_8__ {int max_code; TYPE_1__* stat_desc; TYPE_4__* dyn_tree; } ;
typedef TYPE_2__ tree_desc ;
typedef int intf ;
struct TYPE_9__ {int* bl_count; size_t* heap; size_t heap_max; int opt_len; int static_len; } ;
typedef TYPE_3__ deflate_state ;
struct TYPE_10__ {int Len; size_t Dad; void* Freq; } ;
typedef TYPE_4__ ct_data ;
struct TYPE_7__ {int* extra_bits; int extra_base; int max_length; TYPE_4__* static_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(deflate_state *VAR_3, tree_desc *VAR_4)
{
   ct_data *VAR_5 = VAR_4->dyn_tree;
   int VAR_6 = VAR_4->max_code;
   const ct_data *VAR_7 = VAR_4->stat_desc->static_tree;
   const intf *VAR_8 = VAR_4->stat_desc->extra_bits;
   int VAR_9 = VAR_4->stat_desc->extra_base;
   int VAR_10 = VAR_4->stat_desc->max_length;
   int VAR_11;
   int VAR_12, VAR_13;
   int VAR_14;
   int VAR_15;
   ush VAR_16;
   int VAR_17 = 0;

   for (VAR_14 = 0; VAR_14 <= VAR_1; VAR_14++) VAR_3->bl_count[VAR_14] = 0;




   VAR_5[VAR_3->heap[VAR_3->heap_max]].Len = 0;

   for (VAR_11 = VAR_3->heap_max+1; VAR_11 < VAR_0; VAR_11++) {
      VAR_12 = VAR_3->heap[VAR_11];
      VAR_14 = VAR_5[VAR_5[VAR_12].Dad].Len + 1;
      if (VAR_14 > VAR_10) VAR_14 = VAR_10, VAR_17++;
      VAR_5[VAR_12].Len = (ush)VAR_14;


      if (VAR_12 > VAR_6) continue;

      VAR_3->bl_count[VAR_14]++;
      VAR_15 = 0;
      if (VAR_12 >= VAR_9) VAR_15 = VAR_8[VAR_12-VAR_9];
      VAR_16 = VAR_5[VAR_12].Freq;
      VAR_3->opt_len += (ulg)VAR_16 * (VAR_14 + VAR_15);
      if (VAR_7) VAR_3->static_len += (ulg)VAR_16 * (VAR_7[VAR_12].Len + VAR_15);
   }
   if (VAR_17 == 0) return;

   FUNC_0((VAR_2,"\nbit length overflow\n"));



   do {
      VAR_14 = VAR_10-1;
      while (VAR_3->bl_count[VAR_14] == 0) VAR_14--;
      VAR_3->bl_count[VAR_14]--;
      VAR_3->bl_count[VAR_14+1] += 2;
      VAR_3->bl_count[VAR_10]--;



      VAR_17 -= 2;
   } while (VAR_17 > 0);






   for (VAR_14 = VAR_10; VAR_14 != 0; VAR_14--) {
      VAR_12 = VAR_3->bl_count[VAR_14];
      while (VAR_12 != 0) {
         VAR_13 = VAR_3->heap[--VAR_11];
         if (VAR_13 > VAR_6) continue;
         if ((unsigned) VAR_5[VAR_13].Len != (unsigned) VAR_14) {
            FUNC_0((VAR_2,"code %d bits %d->%d\n", VAR_13, VAR_5[VAR_13].Len, VAR_14));
            VAR_3->opt_len += ((long)VAR_14 - (long)VAR_5[VAR_13].Len)
               *(long)VAR_5[VAR_13].Freq;
            VAR_5[VAR_13].Len = (ush)VAR_14;
         }
         VAR_12--;
      }
   }
}
