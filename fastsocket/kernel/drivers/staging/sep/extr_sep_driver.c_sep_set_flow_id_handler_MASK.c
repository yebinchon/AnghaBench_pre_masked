
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_flow_context_t {unsigned long flow_id; } ;
struct sep_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sep_flow_context_t* FUNC_2 (struct sep_device*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct sep_device *VAR_3,
      unsigned long VAR_4)
{
 int VAR_5 = 0;
 struct sep_flow_context_t *VAR_6;




 FUNC_0(&VAR_2);
 VAR_6 = FUNC_2(VAR_3, VAR_1);
 if (VAR_6)
  VAR_6->flow_id = VAR_4;
 else
  VAR_5 = -VAR_0;
 FUNC_1(&VAR_2);
 return VAR_5;
}
