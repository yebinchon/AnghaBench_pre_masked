
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_size_t ;
struct TYPE_4__ {scalar_t__ bufsize; scalar_t__ allocsize; int * buffer; int stride; int image; } ;
typedef TYPE_1__ Image ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(Image *VAR_4)
{
   png_size_t VAR_5 = FUNC_0(VAR_4->image, VAR_4->stride);

   if (VAR_5+32 > VAR_4->bufsize)
   {
      FUNC_4(VAR_4);
      VAR_4->buffer = FUNC_7(VAR_1, FUNC_5(VAR_5+32));
      if (VAR_4->buffer == ((void*)0))
      {
         FUNC_2(VAR_3);
         FUNC_3(VAR_2,
            "simpletest: out of memory allocating %lu(+32) byte buffer\n",
            (unsigned long)VAR_5);
         FUNC_1(1);
      }
      VAR_4->bufsize = VAR_5+32;
   }

   FUNC_6(VAR_4->buffer, 95, VAR_4->bufsize);
   FUNC_6(VAR_4->buffer+16, VAR_0, VAR_5);
   VAR_4->allocsize = VAR_5;
}
