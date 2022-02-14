
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int linesizes ;
struct TYPE_5__ {unsigned int* cache_info; int cpuid_cores_per_package; int* cache_size; int* cache_sharing; int* cache_partitions; int cpuid_cache_L2_associativity; int core_count; int cpuid_cache_size; int cpuid_cache_linesize; int cache_linesize; int cpuid_stlb; int *** cpuid_tlb; } ;
typedef TYPE_1__ i386_cpu_info_t ;
struct TYPE_6__ {int type; int entries; int level; int size; } ;
typedef TYPE_2__ cpuid_cache_descriptor_t ;
typedef size_t cache_type_t ;
typedef scalar_t__ boolean_t ;





 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_1 (int,int,int) ;
 int FUNC_2 (int*,int) ;
 int * VAR_13 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,int*) ;
 TYPE_2__* FUNC_5 (unsigned int) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_6 (char*) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_7( i386_cpu_info_t * VAR_18 )
{
 uint32_t VAR_19[4];
 uint32_t VAR_20[4];
 uint32_t VAR_21;
 uint32_t VAR_22[VAR_5];
 unsigned int VAR_23;
 unsigned int VAR_24;
 boolean_t VAR_25 = VAR_0;

 FUNC_0("cpuid_set_cache_info(%p)\n", VAR_18);

 FUNC_2( VAR_22, sizeof(VAR_22) );




 FUNC_4(2, VAR_19);
 for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
  if ((VAR_19[VAR_24] >> 31) == 1)
   continue;
  ((uint32_t *) VAR_18->cache_info)[VAR_24] = VAR_19[VAR_24];
 }

 for (VAR_23 = 1; VAR_23 < VAR_18->cache_info[0]; VAR_23++) {
  if (VAR_23*16 > sizeof(VAR_18->cache_info))
   break;
  FUNC_4(2, VAR_19);
  for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
   if ((VAR_19[VAR_24] >> 31) == 1)
    continue;
   ((uint32_t *) VAR_18->cache_info)[4*VAR_23+VAR_24] =
    VAR_19[VAR_24];
  }
 }






 FUNC_4(0, VAR_19);
 if (VAR_19[VAR_14] >= 4)
  VAR_25 = VAR_12;

 for (VAR_21 = 0; VAR_25; VAR_21++) {
  cache_type_t VAR_26 = VAR_6;
  uint32_t VAR_27;
  uint32_t VAR_28;
  uint32_t VAR_29;
  uint32_t VAR_30;
  uint32_t VAR_31;
  uint32_t VAR_32;
  uint32_t VAR_33;
  uint32_t VAR_34;
  uint32_t VAR_35;

  VAR_20[VAR_14] = 4;
  VAR_20[VAR_16] = VAR_21;
  FUNC_3(VAR_20);
  FUNC_0("cpuid(4) index=%d eax=0x%x\n", VAR_21, VAR_20[VAR_14]);
  VAR_27 = FUNC_1(VAR_20[VAR_14], 4, 0);
  if (VAR_27 == 0)
   break;
  VAR_28 = FUNC_1(VAR_20[VAR_14], 7, 5);
  VAR_29 = FUNC_1(VAR_20[VAR_14], 25, 14) + 1;
  VAR_18->cpuid_cores_per_package
     = FUNC_1(VAR_20[VAR_14], 31, 26) + 1;
  VAR_30 = FUNC_1(VAR_20[VAR_15], 11, 0) + 1;
  VAR_34 = FUNC_1(VAR_20[VAR_15], 21, 12) + 1;
  VAR_32 = FUNC_1(VAR_20[VAR_15], 31, 22) + 1;
  VAR_31 = FUNC_1(VAR_20[VAR_16], 31, 0) + 1;


  switch (VAR_28) {
  case 1:
   VAR_26 = VAR_27 == 1 ? VAR_1 :
          VAR_27 == 2 ? VAR_2 :
       VAR_6;
   break;
  case 2:
   VAR_26 = VAR_27 == 3 ? VAR_3 :
       VAR_6;
   break;
  case 3:
   VAR_26 = VAR_27 == 3 ? VAR_4 :
       VAR_6;
   break;
  default:
   VAR_26 = VAR_6;
  }




  if (VAR_26 != VAR_6) {
   VAR_33 = VAR_30 * VAR_31 *
         VAR_32 * VAR_34;
   VAR_18->cache_size[VAR_26] = VAR_33;
   VAR_18->cache_sharing[VAR_26] = VAR_29;
   VAR_18->cache_partitions[VAR_26] = VAR_34;
   VAR_22[VAR_26] = VAR_30;

   FUNC_0(" cache_size[%s]      : %d\n",
       VAR_13[VAR_26], VAR_33);
   FUNC_0(" cache_sharing[%s]   : %d\n",
       VAR_13[VAR_26], VAR_29);
   FUNC_0(" cache_partitions[%s]: %d\n",
       VAR_13[VAR_26], VAR_34);






   if (VAR_26 == VAR_3)
    VAR_18->cpuid_cache_L2_associativity = VAR_32;




            if (VAR_26 == VAR_4 && VAR_18->core_count)
                VAR_31 = VAR_31 / VAR_18->core_count;
    VAR_35 = ( VAR_30 * VAR_31 ) >> 12;

    if ( VAR_35 > VAR_17 )
    VAR_17 = VAR_35;
  }
 }
 FUNC_0(" vm_cache_geometry_colors: %d\n", VAR_17);





 if (VAR_18->cpuid_cores_per_package == 0) {
  VAR_18->cpuid_cores_per_package = 1;


  VAR_18->cache_size[VAR_3] = VAR_18->cpuid_cache_size * 1024;
  VAR_18->cache_sharing[VAR_3] = 1;
  VAR_18->cache_partitions[VAR_3] = 1;

  VAR_22[VAR_3] = VAR_18->cpuid_cache_linesize;

  FUNC_0(" cache_size[L2U]      : %d\n",
      VAR_18->cache_size[VAR_3]);
  FUNC_0(" cache_sharing[L2U]   : 1\n");
  FUNC_0(" cache_partitions[L2U]: 1\n");
  FUNC_0(" linesizes[L2U]       : %d\n",
      VAR_18->cpuid_cache_linesize);
 }





 if ( VAR_22[VAR_3] )
  VAR_18->cache_linesize = VAR_22[VAR_3];
 else if (VAR_22[VAR_1])
  VAR_18->cache_linesize = VAR_22[VAR_1];
 else FUNC_6("no linesize");
 FUNC_0(" cache_linesize    : %d\n", VAR_18->cache_linesize);




 FUNC_0(" %ld leaf2 descriptors:\n", sizeof(VAR_18->cache_info));
 for (VAR_23 = 1; VAR_23 < sizeof(VAR_18->cache_info); VAR_23++) {
  cpuid_cache_descriptor_t *VAR_36;
  int VAR_37;
  int VAR_38;
  int VAR_39;

  FUNC_0(" 0x%02x", VAR_18->cache_info[VAR_23]);
  VAR_36 = FUNC_5(VAR_18->cache_info[VAR_23]);
  if (VAR_36 == ((void*)0))
   continue;

  switch (VAR_36->type) {
  case 128:
   VAR_39 = (VAR_36->size == VAR_7) ? VAR_11 : VAR_10;

   switch (VAR_36->level) {
   case 130:
    VAR_37 = VAR_9;
    break;
   case 133:
   case 132:
   case 131:
    VAR_37 = VAR_8;
    break;
   default:
    continue;
   }

   switch (VAR_36->level) {
   case 131:
    VAR_38 = 1;
    break;
   default:
    VAR_38 = 0;
   }
   VAR_18->cpuid_tlb[VAR_37][VAR_39][VAR_38] = VAR_36->entries;
   break;
  case 129:
   VAR_18->cpuid_stlb = VAR_36->entries;
  }
 }
 FUNC_0("\n");
}
