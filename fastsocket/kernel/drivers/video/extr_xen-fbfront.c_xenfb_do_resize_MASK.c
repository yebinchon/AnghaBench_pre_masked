
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union xenfb_out_event {int resize; } ;
struct xenfb_info {int resize; } ;
typedef int event ;


 int FUNC_0 (union xenfb_out_event*,int ,int) ;
 int FUNC_1 (struct xenfb_info*,union xenfb_out_event*) ;

__attribute__((used)) static void FUNC_2(struct xenfb_info *VAR_0)
{
 union xenfb_out_event VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.resize = VAR_0->resize;


 FUNC_1(VAR_0, &VAR_1);
}
