
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int** allocptr; } ;
typedef TYPE_1__ zlib_allocator ;
typedef int* voidpf ;
typedef int uInt ;
typedef int UINT32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

voidpf FUNC_1(voidpf VAR_1, uInt VAR_2, uInt VAR_3)
{
 zlib_allocator *VAR_4 = (zlib_allocator *)VAR_1;
 UINT32 *VAR_5;
 int VAR_6;


 VAR_3 = (VAR_3 * VAR_2 + 0x3ff) & ~0x3ff;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
 {
  VAR_5 = VAR_4->allocptr[VAR_6];
  if (VAR_5 && VAR_3 == *VAR_5)
  {

   *VAR_5 |= 1;
   return VAR_5 + 1;
  }
 }


 VAR_5 = (UINT32 *)FUNC_0(VAR_3 + sizeof(UINT32));
 if (!VAR_5)
  return ((void*)0);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (!VAR_4->allocptr[VAR_6])
  {
   VAR_4->allocptr[VAR_6] = VAR_5;
   break;
  }


 *VAR_5 = VAR_3 | 1;
 return VAR_5 + 1;
}
