
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int* semaphore_register; size_t id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct intel_ring_buffer *VAR_5,
        struct intel_ring_buffer *VAR_6,
        u32 VAR_7)
{
 int VAR_8;
 u32 VAR_9 = VAR_2 |
    VAR_1 |
    VAR_3;





 VAR_7 -= 1;

 FUNC_0(VAR_6->semaphore_register[VAR_5->id] ==
  VAR_4);

 VAR_8 = FUNC_3(VAR_5, 4);
 if (VAR_8)
  return VAR_8;


 if (FUNC_5(!FUNC_1(VAR_5->dev, VAR_7))) {
  FUNC_4(VAR_5,
    VAR_9 |
    VAR_6->semaphore_register[VAR_5->id]);
  FUNC_4(VAR_5, VAR_7);
  FUNC_4(VAR_5, 0);
  FUNC_4(VAR_5, VAR_0);
 } else {
  FUNC_4(VAR_5, VAR_0);
  FUNC_4(VAR_5, VAR_0);
  FUNC_4(VAR_5, VAR_0);
  FUNC_4(VAR_5, VAR_0);
 }
 FUNC_2(VAR_5);

 return 0;
}
