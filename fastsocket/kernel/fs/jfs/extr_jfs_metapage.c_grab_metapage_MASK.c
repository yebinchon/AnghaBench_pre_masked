
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int page; int count; } ;


 int FUNC_0 (char*,struct metapage*) ;
 int FUNC_1 (struct metapage*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct metapage * VAR_0)
{
 FUNC_0("grab_metapage: mp = 0x%p", VAR_0);
 FUNC_3(VAR_0->page);
 FUNC_2(VAR_0->page);
 VAR_0->count++;
 FUNC_1(VAR_0);
 FUNC_4(VAR_0->page);
}
