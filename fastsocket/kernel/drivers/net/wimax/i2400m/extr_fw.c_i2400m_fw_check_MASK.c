
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bcf_hdr {unsigned int module_type; int size; int date; int module_vendor; int module_id; int header_version; int header_len; } ;
struct i2400m {int fw_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,size_t,unsigned int,size_t) ;
 int FUNC_1 (struct device*,char*,int ,unsigned int,...) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
int FUNC_4(struct i2400m *VAR_1,
      const struct i2400m_bcf_hdr *VAR_2,
      size_t VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_2(VAR_1);
 unsigned VAR_6, VAR_7, VAR_8, VAR_9,
  VAR_10, VAR_11, VAR_12, VAR_13;


 VAR_4 = -VAR_0;
 if (VAR_3 < sizeof(*VAR_2)) {
  FUNC_1(VAR_5, "firmware %s too short: "
   "%zu B vs %zu (at least) expected\n",
   VAR_1->fw_name, VAR_3, sizeof(*VAR_2));
  goto error;
 }

 VAR_6 = VAR_2->module_type;
 VAR_7 = sizeof(u32) * FUNC_3(VAR_2->header_len);
 VAR_8 = FUNC_3(VAR_2->header_version) & 0xffff0000 >> 16;
 VAR_9 = FUNC_3(VAR_2->header_version) & 0x0000ffff;
 VAR_10 = FUNC_3(VAR_2->module_id);
 VAR_11 = FUNC_3(VAR_2->module_vendor);
 VAR_12 = FUNC_3(VAR_2->date);
 VAR_13 = sizeof(u32) * FUNC_3(VAR_2->size);

 if (VAR_3 != VAR_13) {
  FUNC_1(VAR_5, "firmware %s: bad size, got "
   "%zu B vs %u expected\n",
   VAR_1->fw_name, VAR_3, VAR_13);
  goto error;
 }

 FUNC_0(2, VAR_5, "type 0x%x id 0x%x vendor 0x%x; header v%u.%u (%zu B) "
   "date %08x (%zu B)\n",
   VAR_6, VAR_10, VAR_11,
   VAR_8, VAR_9, (size_t) VAR_7,
   VAR_12, (size_t) VAR_13);

 if (VAR_6 != 6) {
  FUNC_1(VAR_5, "bad fw %s: unexpected module type 0x%x; "
   "aborting\n", VAR_1->fw_name, VAR_6);
  goto error;
 }


 VAR_4 = 0;
 if (VAR_11 != 0x8086)
  FUNC_1(VAR_5, "bad fw %s? unexpected vendor 0x%04x\n",
   VAR_1->fw_name, VAR_11);
 if (VAR_12 < 0x20080300)
  FUNC_1(VAR_5, "bad fw %s? build date too old %08x\n",
   VAR_1->fw_name, VAR_12);
error:
 return VAR_4;
}
