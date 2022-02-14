
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_tlv_hdr {int dummy; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef enum i2400m_tlv { ____Placeholder_i2400m_tlv } i2400m_tlv ;


 int FUNC_0 (struct device*,char*,int,scalar_t__,scalar_t__) ;
 struct device* FUNC_1 (struct i2400m*) ;
 struct i2400m_tlv_hdr* FUNC_2 (struct i2400m*,struct i2400m_tlv_hdr const*,size_t,struct i2400m_tlv_hdr const*) ;
 scalar_t__ FUNC_3 (struct i2400m_tlv_hdr const*,int,scalar_t__) ;

__attribute__((used)) static
const struct i2400m_tlv_hdr *FUNC_4(
 struct i2400m *VAR_0,
 const struct i2400m_tlv_hdr *VAR_1, size_t VAR_2,
 enum i2400m_tlv VAR_3, ssize_t VAR_4)
{
 ssize_t VAR_5;
 struct device *VAR_6 = FUNC_1(VAR_0);
 const struct i2400m_tlv_hdr *VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_7))) {
  VAR_5 = FUNC_3(VAR_7, VAR_3, VAR_4);
  if (VAR_5 == 0)
   break;
  if (VAR_5 > 0)
   FUNC_0(VAR_6, "TLV type 0x%04x found with size "
     "mismatch (%zu vs %zu needed)\n",
     VAR_3, VAR_5, VAR_4);
 }
 return VAR_7;
}
