
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct egpio_info {int ack_register; int bus_shift; int ack_write; } ;


 int FUNC_0 (int ,struct egpio_info*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct egpio_info *VAR_0)
{
 FUNC_0(VAR_0->ack_write, VAR_0, VAR_0->ack_register);
 FUNC_1("EGPIO ack - write %x to base+%x\n",
   VAR_0->ack_write, VAR_0->ack_register << VAR_0->bus_shift);
}
