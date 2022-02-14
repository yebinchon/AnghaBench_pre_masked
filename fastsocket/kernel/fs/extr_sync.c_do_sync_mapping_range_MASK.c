
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct address_space*,int,int,int ) ;
 int FUNC_1 (struct address_space*,int,int) ;

int FUNC_2(struct address_space *VAR_6, loff_t VAR_7,
     loff_t VAR_8, unsigned int VAR_9)
{
 int VAR_10;

 if (!VAR_6) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = 0;
 if (VAR_9 & VAR_3) {
  VAR_10 = FUNC_1(VAR_6,
     VAR_7 >> VAR_1,
     VAR_8 >> VAR_1);
  if (VAR_10 < 0)
   goto out;
 }

 if (VAR_9 & VAR_4) {
  VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8,
      VAR_5);
  if (VAR_10 < 0)
   goto out;
 }

 if (VAR_9 & VAR_2) {
  VAR_10 = FUNC_1(VAR_6,
     VAR_7 >> VAR_1,
     VAR_8 >> VAR_1);
 }
out:
 return VAR_10;
}
