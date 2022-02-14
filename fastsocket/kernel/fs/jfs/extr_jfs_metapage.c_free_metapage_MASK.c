
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {scalar_t__ flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct metapage*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_2(struct metapage *VAR_2)
{
 VAR_2->flag = 0;
 FUNC_1(VAR_0, &VAR_2->flag);

 FUNC_0(VAR_2, VAR_1);
}
