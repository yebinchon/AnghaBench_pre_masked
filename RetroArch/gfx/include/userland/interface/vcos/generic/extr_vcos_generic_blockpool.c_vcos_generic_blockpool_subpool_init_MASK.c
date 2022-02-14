
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VCOS_UNSIGNED ;
struct TYPE_8__ {int block_size; scalar_t__ block_data_size; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_9__ {char* mem; char* start; int num_blocks; int available_blocks; TYPE_4__* free_list; TYPE_4__* end; TYPE_2__* owner; int magic; } ;
typedef TYPE_3__ VCOS_BLOCKPOOL_SUBPOOL_T ;
struct TYPE_7__ {TYPE_4__* next; } ;
struct TYPE_10__ {TYPE_1__ owner; } ;
typedef TYPE_4__ VCOS_BLOCKPOOL_HEADER_T ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,void*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(
      VCOS_BLOCKPOOL_T *VAR_3, VCOS_BLOCKPOOL_SUBPOOL_T *VAR_4,
      void *VAR_5, size_t VAR_6, VCOS_UNSIGNED VAR_7, int VAR_8,
      uint32_t VAR_9)
{
   VCOS_BLOCKPOOL_HEADER_T *VAR_10;
   VCOS_BLOCKPOOL_HEADER_T *VAR_11;

   FUNC_4(VAR_9);

   FUNC_3(
         "%s: pool %p subpool %p mem %p pool_size %d " "num_blocks %d align %d flags %x",

         VAR_2,
         VAR_3, VAR_4, VAR_5, (uint32_t) VAR_6,
         VAR_7, VAR_8, VAR_9);

   VAR_4->magic = VAR_1;
   VAR_4->mem = VAR_5;






   VAR_4->start = (char *) VAR_4->mem + sizeof(VCOS_BLOCKPOOL_HEADER_T);
   VAR_4->start = (void*)
      FUNC_0((unsigned long) VAR_4->start, VAR_8);
   VAR_4->start = (char *) VAR_4->start - sizeof(VCOS_BLOCKPOOL_HEADER_T);

   FUNC_2(VAR_4->start >= VAR_4->mem);

   FUNC_3("%s: mem %p subpool->start %p" " pool->block_size %d pool->block_data_size %d",

         VAR_2, VAR_5, VAR_4->start,
         (int) VAR_3->block_size, (int) VAR_3->block_data_size);

   VAR_4->num_blocks = VAR_7;
   VAR_4->available_blocks = VAR_7;
   VAR_4->free_list = ((void*)0);
   VAR_4->owner = VAR_3;



   if (VAR_6 < VAR_0)
      FUNC_1(VAR_4->mem, 0xBC, VAR_6);

   VAR_10 = (VCOS_BLOCKPOOL_HEADER_T*) VAR_4->start;
   VAR_11 = (VCOS_BLOCKPOOL_HEADER_T*)
      ((char *) VAR_4->start + (VAR_3->block_size * VAR_7));
   VAR_4->end = VAR_11;


   while (VAR_10 < VAR_11)
   {
      VAR_10->owner.next = VAR_4->free_list;
      VAR_4->free_list = VAR_10;
      VAR_10 = (VCOS_BLOCKPOOL_HEADER_T*)((char*) VAR_10 + VAR_3->block_size);
   }

}
