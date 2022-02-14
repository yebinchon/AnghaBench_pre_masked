
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int stride; int height; int format; int width; scalar_t__ storage; } ;
typedef TYPE_1__ KHRN_IMAGE_WRAP_T ;
typedef int EGLImageKHR ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(EGLImageKHR VAR_3, KHRN_IMAGE_WRAP_T *VAR_4)
{
   int VAR_5 = (VAR_4->stride < 0) ? -VAR_4->stride : VAR_4->stride;
   int VAR_6 = VAR_1 / VAR_5;
   int VAR_7 = 0;
   int VAR_8 = VAR_4->height;

   if (FUNC_7(VAR_4->format))
      VAR_6 &= ~63;

   FUNC_6(VAR_6 > 0);

   while (VAR_8 > 0) {
      int VAR_9 = FUNC_5(VAR_6, VAR_8);
      uint32_t VAR_10 = VAR_9 * VAR_5;

      CLIENT_THREAD_STATE_T *VAR_11 = FUNC_0();
      int VAR_12 = (VAR_4->stride < 0) ? (VAR_7 + (VAR_9 - 1)) : VAR_7;

      FUNC_1(VAR_2,
         VAR_11,
         VAR_0,
         FUNC_2(VAR_3),
         FUNC_4(VAR_4->format),
         FUNC_4(0),
         FUNC_3(VAR_7),
         FUNC_4(VAR_4->width),
         FUNC_3(VAR_9),
         FUNC_4(VAR_4->stride),
         (const char *)VAR_4->storage + VAR_12 * VAR_4->stride,
         VAR_10);

      VAR_7 += VAR_9;
      VAR_8 -= VAR_9;
   }
}
