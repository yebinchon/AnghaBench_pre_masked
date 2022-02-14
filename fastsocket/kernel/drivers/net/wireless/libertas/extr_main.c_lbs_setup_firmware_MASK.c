
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {void* txpower_max; void* txpower_min; void* txpower_cur; int current_addr; } ;
typedef void* s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,void**,void**,void**) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct lbs_private *VAR_2)
{
 int VAR_3 = -1;
 s16 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;

 FUNC_0(VAR_1);


 FUNC_5(VAR_2->current_addr, 0xff, VAR_0);
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto done;


 VAR_3 = FUNC_2(VAR_2, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_3 == 0) {
  VAR_2->txpower_cur = VAR_4;
  VAR_2->txpower_min = VAR_5;
  VAR_2->txpower_max = VAR_6;
 }

 FUNC_3(VAR_2);
done:
 FUNC_1(VAR_1, "ret %d", VAR_3);
 return VAR_3;
}
