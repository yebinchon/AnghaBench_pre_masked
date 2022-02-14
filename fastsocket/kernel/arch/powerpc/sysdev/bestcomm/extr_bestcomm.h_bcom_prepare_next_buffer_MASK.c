
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {int index; } ;
struct bcom_bd {scalar_t__ status; } ;


 struct bcom_bd* FUNC_0 (struct bcom_task*,int ) ;

__attribute__((used)) static inline struct bcom_bd *
FUNC_1(struct bcom_task *VAR_0)
{
 struct bcom_bd *VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->index);
 VAR_1->status = 0;
 return VAR_1;
}
