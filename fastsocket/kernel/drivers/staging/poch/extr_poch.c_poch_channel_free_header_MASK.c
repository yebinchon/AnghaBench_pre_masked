
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_info {int header_pg; int header_size; } ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct channel_info *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_1(VAR_0->header_size);
 FUNC_0(VAR_0->header_pg, VAR_1);
}
