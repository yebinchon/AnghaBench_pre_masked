
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int PC; } ;
typedef TYPE_1__ sh2regs_struct ;
typedef char gchar ;
struct TYPE_8__ {int debugsh; int bpListStore; } ;
typedef TYPE_2__ YuiSh ;
typedef int GtkTreeIter ;
typedef int GtkCellRendererText ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *,int ,char**,int) ;
 int FUNC_8 (int ,int *,char*) ;
 int FUNC_9 (char*,char*,unsigned int*) ;
 int FUNC_10 (char*) ;
 unsigned int FUNC_11 (char*,char**,int) ;

__attribute__((used)) static void FUNC_12( GtkCellRendererText *VAR_0,
        gchar *VAR_1,
        gchar *VAR_2,
        YuiSh *VAR_3) {


  GtkTreeIter VAR_4;
  char *VAR_5;
  unsigned int VAR_6;
  gchar * VAR_7;
  unsigned int VAR_8;

  FUNC_8( FUNC_0( VAR_3->bpListStore ), &VAR_4, VAR_1 );

  FUNC_7(FUNC_0( VAR_3->bpListStore ), &VAR_4, 0, &VAR_7, -1);
  FUNC_9(VAR_7, "%8X", &VAR_8);
  FUNC_6(VAR_7);

  FUNC_2(VAR_3->debugsh, VAR_8);

  VAR_6 = FUNC_11(VAR_2, &VAR_5, 16 );
  if ((VAR_5 - VAR_2 < FUNC_10(VAR_2)) || (!VAR_6)) VAR_6 = 0xFFFFFFFF;

  if (VAR_6 != 0xFFFFFFFF) {
    FUNC_1(VAR_3->debugsh, VAR_6);
  }

  {
    sh2regs_struct VAR_9;
    FUNC_3(VAR_3->debugsh, &VAR_9);
    FUNC_5(VAR_3,VAR_9.PC);
    FUNC_4(VAR_3);
  }
}
