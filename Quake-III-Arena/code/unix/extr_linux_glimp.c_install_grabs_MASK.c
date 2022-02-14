
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int vidWidth; int vidHeight; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_4__ {int (* Cvar_Set ) (char*,char*) ;int (* Printf ) (int ,char*) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int,int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int*,int*) ;
 int FUNC_7 (int ,int *,int *,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*,char*) ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_14(void)
{

  FUNC_11(VAR_8, VAR_4, VAR_20,
               0, 0, 0, 0,
               VAR_9.vidWidth / 2, VAR_9.vidHeight / 2);
  FUNC_10(VAR_8, VAR_1);

  FUNC_4(VAR_8, VAR_20, FUNC_0(VAR_8, VAR_20));

  FUNC_9(VAR_8, VAR_20,
               VAR_1,
               VAR_3,
               VAR_2, VAR_2,
               VAR_20,
               VAR_4,
               VAR_0);

  FUNC_7(VAR_8, &VAR_13, &VAR_12,
                     &VAR_14);

  FUNC_3(VAR_8, VAR_6, VAR_6, 1, 1, 0);

  FUNC_10(VAR_8, VAR_1);

  VAR_11 = FUNC_2 ();

  if (VAR_10->value)
  {
    int VAR_21, VAR_22;

    if (!FUNC_6(VAR_8, &VAR_21, &VAR_22))
    {

      VAR_19.Printf( VAR_5, "Failed to detect XF86DGA Mouse\n" );
      VAR_19.Cvar_Set( "in_dgamouse", "0" );
    } else
    {
      FUNC_5(VAR_8, FUNC_1(VAR_8), VAR_7);
      FUNC_11(VAR_8, VAR_4, VAR_20, 0, 0, 0, 0, 0, 0);
    }
  } else
  {
    VAR_15 = VAR_9.vidWidth / 2;
    VAR_16 = VAR_9.vidHeight / 2;
    VAR_17 = VAR_18 = 0;
  }

  FUNC_8(VAR_8, VAR_20,
                VAR_1,
                VAR_2, VAR_2,
                VAR_0);

  FUNC_10(VAR_8, VAR_1);
}
