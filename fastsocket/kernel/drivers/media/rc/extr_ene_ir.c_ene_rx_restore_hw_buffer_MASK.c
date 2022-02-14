
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int extra_buf1_address; int extra_buf1_len; int extra_buf2_address; int extra_buf2_len; int hw_extra_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ene_device*,int ,int ) ;
 int FUNC_1 (struct ene_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct ene_device *VAR_3)
{
 if (!VAR_3->hw_extra_buffer)
  return;

 FUNC_1(VAR_3, VAR_2 + 0,
    VAR_3->extra_buf1_address & 0xFF);
 FUNC_1(VAR_3, VAR_2 + 1,
    VAR_3->extra_buf1_address >> 8);
 FUNC_1(VAR_3, VAR_2 + 2, VAR_3->extra_buf1_len);

 FUNC_1(VAR_3, VAR_2 + 3,
    VAR_3->extra_buf2_address & 0xFF);
 FUNC_1(VAR_3, VAR_2 + 4,
    VAR_3->extra_buf2_address >> 8);
 FUNC_1(VAR_3, VAR_2 + 5,
    VAR_3->extra_buf2_len);
 FUNC_0(VAR_3, VAR_0, VAR_1);
}
