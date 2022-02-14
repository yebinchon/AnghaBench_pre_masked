
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36050 {int mode; int name; } ;
struct videocodec {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct zr36050*) ;

__attribute__((used)) static int
FUNC_2 (struct videocodec *VAR_3,
    int VAR_4)
{
 struct zr36050 *VAR_5 = (struct zr36050 *) VAR_3->data;

 FUNC_0(2, "%s: set_mode %d call\n", VAR_5->name, VAR_4);

 if ((VAR_4 != VAR_1) && (VAR_4 != VAR_0))
  return -VAR_2;

 VAR_5->mode = VAR_4;
 FUNC_1(VAR_5);

 return 0;
}
