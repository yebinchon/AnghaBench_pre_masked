
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;


 int FUNC_0 (int,int,struct cifs_tcon*,void**,void**) ;
 int FUNC_1 (struct cifs_tcon*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, int VAR_1, struct cifs_tcon *VAR_2,
  void **VAR_3, void **VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
