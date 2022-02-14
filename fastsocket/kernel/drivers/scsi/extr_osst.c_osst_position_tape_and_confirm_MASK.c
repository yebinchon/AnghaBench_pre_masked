
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osst_tape {int dummy; } ;
struct osst_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct osst_tape*,struct osst_request**) ;
 int FUNC_1 (struct osst_tape*,struct osst_request**,int,int ) ;
 int FUNC_2 (struct osst_tape*,struct osst_request**,int,int ) ;

__attribute__((used)) static int FUNC_3(struct osst_tape * VAR_1, struct osst_request ** VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1, VAR_2, 15 * 60, 0);
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, 0);
 if (VAR_4) return (VAR_4);
 FUNC_2(VAR_1, VAR_2, 15 * 60, VAR_0);
 return (FUNC_0(VAR_1, VAR_2));
}
