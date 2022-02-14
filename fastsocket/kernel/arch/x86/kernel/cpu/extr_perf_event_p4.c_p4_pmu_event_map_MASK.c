
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct p4_event_bind {int opcode; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 struct p4_event_bind* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static u64 FUNC_4(int VAR_1)
{
 struct p4_event_bind *VAR_2;
 unsigned int VAR_3;
 u64 VAR_4;

 VAR_4 = VAR_0[VAR_1];
 VAR_2 = FUNC_2(VAR_4);
 VAR_3 = FUNC_1(VAR_2->opcode);
 VAR_4 |= FUNC_3(FUNC_0(VAR_3));

 return VAR_4;
}
