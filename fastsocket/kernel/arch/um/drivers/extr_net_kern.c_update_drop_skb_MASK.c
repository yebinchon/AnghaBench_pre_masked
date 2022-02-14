
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(int VAR_4)
{
 struct sk_buff *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_1, VAR_6);

 if (VAR_4 <= VAR_2)
  goto out;

 VAR_7 = -VAR_0;
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0))
  goto out;

 FUNC_2(VAR_5, VAR_4);

 FUNC_1(VAR_3);
 VAR_3 = VAR_5;
 VAR_2 = VAR_4;
 VAR_7 = 0;
out:
 FUNC_4(&VAR_1, VAR_6);

 return VAR_7;
}
