
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int w_pointer; int r_pointer; scalar_t__ hw_extra_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct ene_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct ene_device *VAR_4)
{
 if (VAR_4->hw_extra_buffer)
  VAR_4->w_pointer = FUNC_1(VAR_4, VAR_3);
 else
  VAR_4->w_pointer = FUNC_1(VAR_4, VAR_0)
   & VAR_1 ? 0 : VAR_2;

 FUNC_0("RB: HW write pointer: %02x, driver read pointer: %02x",
  VAR_4->w_pointer, VAR_4->r_pointer);
}
