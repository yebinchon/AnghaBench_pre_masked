
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int quad_buffer ;
struct TYPE_3__ {int quad; int vao; } ;
typedef TYPE_1__ fft_t ;
typedef int GLvoid ;
typedef int GLbyte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int const*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int,int ,int ,int ,int const*) ;

__attribute__((used)) static void FUNC_7(fft_t *VAR_4)
{
   static const GLbyte VAR_5[] = {
      -1, -1, 1, -1, -1, 1, 1, 1,
       0, 0, 1, 0, 0, 1, 1, 1,
   };
   FUNC_4(1, &VAR_4->quad);
   FUNC_0(VAR_0, VAR_4->quad);
   FUNC_2(VAR_0,
         sizeof(VAR_5), VAR_5, VAR_3);
   FUNC_0(VAR_0, 0);

   FUNC_5(1, &VAR_4->vao);
   FUNC_1(VAR_4->vao);
   FUNC_0(VAR_0, VAR_4->quad);
   FUNC_3(0);
   FUNC_3(1);
   FUNC_6(0, 2, VAR_1, VAR_2, 0, 0);
   FUNC_6(1, 2, VAR_1, VAR_2, 0,
         (const GLvoid*)((uintptr_t)(8)));
   FUNC_1(0);
   FUNC_0(VAR_0, 0);
}
