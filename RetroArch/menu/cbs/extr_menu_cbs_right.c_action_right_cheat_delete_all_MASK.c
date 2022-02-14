
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msg ;
struct TYPE_2__ {int delete_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(unsigned VAR_7, const char *VAR_8,
      bool VAR_9)
{
   bool VAR_10 = 0 ;
   char VAR_11[256];

   if ( ++VAR_6.delete_state >= 5 )
   {
      VAR_11[0] = '\0';
      VAR_6.delete_state = 0 ;
      FUNC_0(0, VAR_0) ;
      FUNC_2(VAR_1, &VAR_10);
      FUNC_1(VAR_5, ((void*)0));

      FUNC_5(VAR_11,
            FUNC_3(VAR_4), sizeof(VAR_11));
      VAR_11[sizeof(VAR_11) - 1] = 0;

      FUNC_4(VAR_11, 1, 180, 1, ((void*)0), VAR_3, VAR_2);
   }

   return 0;
}
