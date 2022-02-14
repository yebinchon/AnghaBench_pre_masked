
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ene_device {int r_pointer; int w_pointer; int hw_extra_buffer; int buffer_len; int extra_buf1_address; int extra_buf1_len; int extra_buf2_address; int extra_buf2_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ene_device*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ene_device*,scalar_t__) ;
 int FUNC_3 (struct ene_device*) ;
 int FUNC_4 (struct ene_device*,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct ene_device *VAR_4)
{
 u16 VAR_5;

 FUNC_3(VAR_4);
 VAR_4->r_pointer = VAR_4->w_pointer;

 if (!VAR_4->hw_extra_buffer) {
  VAR_4->buffer_len = VAR_2 * 2;
  return;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 VAR_5 |= FUNC_2(VAR_4, VAR_3+1) << 8;
 VAR_4->extra_buf1_address = VAR_5;

 VAR_4->extra_buf1_len = FUNC_2(VAR_4, VAR_3 + 2);

 VAR_5 = FUNC_2(VAR_4, VAR_3 + 3);
 VAR_5 |= FUNC_2(VAR_4, VAR_3 + 4) << 8;
 VAR_4->extra_buf2_address = VAR_5;

 VAR_4->extra_buf2_len = FUNC_2(VAR_4, VAR_3 + 5);

 VAR_4->buffer_len = VAR_4->extra_buf1_len + VAR_4->extra_buf2_len + 8;

 FUNC_1("Hardware uses 2 extended buffers:");
 FUNC_1("  0x%04x - len : %d", VAR_4->extra_buf1_address,
      VAR_4->extra_buf1_len);
 FUNC_1("  0x%04x - len : %d", VAR_4->extra_buf2_address,
      VAR_4->extra_buf2_len);

 FUNC_1("Total buffer len = %d", VAR_4->buffer_len);

 if (VAR_4->buffer_len > 64 || VAR_4->buffer_len < 16)
  goto error;

 if (VAR_4->extra_buf1_address > 0xFBFC ||
     VAR_4->extra_buf1_address < 0xEC00)
  goto error;

 if (VAR_4->extra_buf2_address > 0xFBFC ||
     VAR_4->extra_buf2_address < 0xEC00)
  goto error;

 if (VAR_4->r_pointer > VAR_4->buffer_len)
  goto error;

 FUNC_4(VAR_4, VAR_0, VAR_1);
 return;
error:
 FUNC_5("Error validating extra buffers, device probably won't work");
 VAR_4->hw_extra_buffer = 0;
 FUNC_0(VAR_4, VAR_0, VAR_1);
}
