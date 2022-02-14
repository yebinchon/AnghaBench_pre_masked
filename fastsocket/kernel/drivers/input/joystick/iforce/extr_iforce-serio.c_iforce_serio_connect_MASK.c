
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int dummy; } ;
struct serio {int dummy; } ;
struct iforce {struct serio* serio; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iforce*) ;
 int FUNC_1 (struct iforce*) ;
 struct iforce* FUNC_2 (int,int ) ;
 int FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio*,struct serio_driver*) ;
 int FUNC_5 (struct serio*,struct iforce*) ;

__attribute__((used)) static int FUNC_6(struct serio *VAR_3, struct serio_driver *VAR_4)
{
 struct iforce *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(struct iforce), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->bus = VAR_2;
 VAR_5->serio = VAR_3;

 FUNC_5(VAR_3, VAR_5);

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6)
  goto fail1;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  goto fail2;

 return 0;

 fail2: FUNC_3(VAR_3);
 fail1: FUNC_5(VAR_3, ((void*)0));
 FUNC_1(VAR_5);
 return VAR_6;
}
