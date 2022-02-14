
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* allocptr; } ;
struct TYPE_3__ {TYPE_2__ allocator; int inflater; } ;
typedef TYPE_1__ zlib_codec_data ;
typedef TYPE_2__ zlib_allocator ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(void *VAR_1)
{
 zlib_codec_data *VAR_2 = (zlib_codec_data *)VAR_1;


 if (VAR_2 != ((void*)0))
 {
  int VAR_3;
      zlib_allocator VAR_4;

  FUNC_1(&VAR_2->inflater);


  VAR_4 = VAR_2->allocator;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   if (VAR_4.allocptr[VAR_3])
    FUNC_0(VAR_4.allocptr[VAR_3]);
 }
}
