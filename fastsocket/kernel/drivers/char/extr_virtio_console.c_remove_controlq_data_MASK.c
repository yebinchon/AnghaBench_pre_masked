
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ports_device {int c_ivq; } ;
struct port_buffer {int dummy; } ;


 int FUNC_0 (struct port_buffer*) ;
 int FUNC_1 (struct ports_device*) ;
 struct port_buffer* FUNC_2 (int ) ;
 struct port_buffer* FUNC_3 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct ports_device *VAR_0)
{
 struct port_buffer *VAR_1;
 unsigned int VAR_2;

 if (!FUNC_1(VAR_0))
  return;

 while ((VAR_1 = FUNC_3(VAR_0->c_ivq, &VAR_2)))
  FUNC_0(VAR_1);

 while ((VAR_1 = FUNC_2(VAR_0->c_ivq)))
  FUNC_0(VAR_1);
}
