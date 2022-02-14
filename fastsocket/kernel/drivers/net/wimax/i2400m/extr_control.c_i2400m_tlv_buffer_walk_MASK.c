
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_tlv_hdr {int length; int type; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,void const*,size_t,unsigned int,...) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
const struct i2400m_tlv_hdr *FUNC_4(
 struct i2400m *VAR_0,
 const void *VAR_1, size_t VAR_2,
 const struct i2400m_tlv_hdr *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_0);
 const struct i2400m_tlv_hdr *VAR_5 = VAR_1 + VAR_2;
 size_t VAR_6, VAR_7, VAR_8;
 unsigned VAR_9;

 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_1;
 else
  VAR_3 = (void *) VAR_3
   + FUNC_3(VAR_3->length) + sizeof(*VAR_3);
 if (VAR_3 == VAR_5) {
  VAR_3 = ((void*)0);
  goto error_beyond_end;
 }
 if (VAR_3 > VAR_5) {
  VAR_3 = ((void*)0);
  FUNC_0(1);
  goto error_beyond_end;
 }
 VAR_6 = (void *) VAR_3 - (void *) VAR_1;
 VAR_8 = VAR_2 - VAR_6;
 if (VAR_8 < sizeof(*VAR_3)) {
  FUNC_1(VAR_4, "HW BUG? tlv_buf %p [%zu bytes], tlv @%zu: "
   "short header\n", VAR_1, VAR_2, VAR_6);
  goto error_short_header;
 }
 VAR_9 = FUNC_3(VAR_3->type);
 VAR_7 = FUNC_3(VAR_3->length);
 if (VAR_8 < sizeof(*VAR_3) + VAR_7) {
  FUNC_1(VAR_4, "HW BUG? tlv_buf %p [%zu bytes], "
   "tlv type 0x%04x @%zu: "
   "short data (%zu bytes vs %zu needed)\n",
   VAR_1, VAR_2, VAR_9, VAR_6, VAR_8,
   sizeof(*VAR_3) + VAR_7);
  goto error_short_header;
 }
error_short_header:
error_beyond_end:
 return VAR_3;
}
