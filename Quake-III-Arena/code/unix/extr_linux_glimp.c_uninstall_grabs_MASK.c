
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ value; } ;
struct TYPE_7__ {int vidWidth; int vidHeight; } ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {int (* Printf ) (int ,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int,int) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_7 (int ,char*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_8(void)
{
  if (VAR_6->value)
  {
  if (VAR_3->value)
   VAR_11.Printf( VAR_2, "DGA Mouse - Disabling DGA DirectVideo\n" );
    FUNC_2(VAR_4, FUNC_0(VAR_4), 0);
  }

  FUNC_1(VAR_4, VAR_10, VAR_10, VAR_8,
                        VAR_7, VAR_9);

  FUNC_5(VAR_4, VAR_0);
  FUNC_4(VAR_4, VAR_0);

  FUNC_6(VAR_4, VAR_1, VAR_12,
               0, 0, 0, 0,
               VAR_5.vidWidth / 2, VAR_5.vidHeight / 2);


  FUNC_3(VAR_4, VAR_12);
}
