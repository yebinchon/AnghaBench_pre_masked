
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36016 {int num; int name; } ;
struct videocodec {struct zr36016* data; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct zr36016*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2 (struct videocodec *VAR_2)
{
 struct zr36016 *VAR_3 = VAR_2->data;

 if (VAR_3) {


  FUNC_0(1, "%s: finished codec #%d\n", VAR_3->name,
   VAR_3->num);
  FUNC_1(VAR_3);
  VAR_2->data = ((void*)0);

  VAR_1--;
  return 0;
 }

 return -VAR_0;
}
