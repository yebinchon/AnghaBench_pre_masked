
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_entry {int filp; int wait; int wait_address; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct poll_table_entry *VAR_0)
{
 FUNC_1(VAR_0->wait_address, &VAR_0->wait);
 FUNC_0(VAR_0->filp);
}
