
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {int dummy; } ;
struct fs3270 {int init; scalar_t__ rdbuf; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct raw3270_view*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct raw3270_view *VAR_0)
{
 struct fs3270 *VAR_1;

 VAR_1 = (struct fs3270 *) VAR_0;
 if (VAR_1->rdbuf)
  FUNC_0(VAR_1->rdbuf);
 FUNC_2(((struct fs3270 *) VAR_0)->init);
 FUNC_1(VAR_0);
}
