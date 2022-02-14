
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cols; int rows; int dev; } ;
struct tty3270 {TYPE_1__ view; struct string* status; int freemem; } ;
struct string {scalar_t__ string; } ;
typedef int blueprint ;
 struct string* FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,unsigned char const*,int) ;
 int FUNC_2 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct tty3270 * VAR_0)
{
 static const unsigned char VAR_1[] =
  { 129, 0, 0, 128, 131, 130, 132, 134,
    0, 0, 0, 0, 0, 0, 0, 128, 131, 130, 132,
    133 };
 struct string *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(&VAR_0->freemem,sizeof(VAR_1));
 VAR_0->status = VAR_2;

 FUNC_1(VAR_2->string, VAR_1, sizeof(VAR_1));

 VAR_3 = VAR_0->view.cols * VAR_0->view.rows - 9;
 FUNC_2(VAR_0->view.dev, VAR_2->string + 1, VAR_3);
}
