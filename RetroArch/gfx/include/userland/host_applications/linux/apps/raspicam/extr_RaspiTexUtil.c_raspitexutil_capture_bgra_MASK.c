
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int const width; int const height; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int const,int const,int ,int ,int *) ;
 int FUNC_4 (char*,int ,int const,int const,int const) ;

int FUNC_5(RASPITEX_STATE *VAR_4,
                              uint8_t **VAR_5, size_t *VAR_6)
{
   const int VAR_7 = 4;

   FUNC_4("%s: %dx%d %d", VAR_3,
                  VAR_4->width, VAR_4->height, VAR_7);

   *VAR_6 = VAR_4->width * VAR_4->height * VAR_7;
   *VAR_5 = FUNC_0(*VAR_6, 1);
   if (! *VAR_5)
      goto error;

   FUNC_3(0, 0, VAR_4->width, VAR_4->height, VAR_1,
                VAR_2, *VAR_5);
   if (FUNC_2() != VAR_0)
      goto error;

   return 0;

error:
   *VAR_6 = 0;
   if (*VAR_5)
      FUNC_1(*VAR_5);
   *VAR_5 = ((void*)0);
   return -1;
}
