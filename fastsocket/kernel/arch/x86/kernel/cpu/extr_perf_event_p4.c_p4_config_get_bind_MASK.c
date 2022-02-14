
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct p4_event_bind {int dummy; } ;


 unsigned int FUNC_0 (struct p4_event_bind*) ;
 unsigned int FUNC_1 (int ) ;
 struct p4_event_bind* VAR_0 ;

__attribute__((used)) static struct p4_event_bind *FUNC_2(u64 VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1);
 struct p4_event_bind *VAR_3 = ((void*)0);

 if (VAR_2 < FUNC_0(VAR_0))
  VAR_3 = &VAR_0[VAR_2];

 return VAR_3;
}
