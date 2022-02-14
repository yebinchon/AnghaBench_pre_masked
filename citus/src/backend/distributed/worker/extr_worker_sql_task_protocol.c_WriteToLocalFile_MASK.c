
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fileCompat; } ;
typedef TYPE_1__ TaskFileDestReceiver ;
struct TYPE_6__ {int len; int data; } ;
typedef TYPE_2__* StringInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_2, TaskFileDestReceiver *VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_3->fileCompat, VAR_2->data,
            VAR_2->len, VAR_1);
 if (VAR_4 < 0)
 {
  FUNC_1(VAR_0, (FUNC_2(),
      FUNC_3("could not append to file: %m")));
 }
}
