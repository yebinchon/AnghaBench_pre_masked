
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_tlv_hdr {int dummy; } ;
struct i2400m_l3l4_hdr {int pl; int length; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_l3l4_hdr const*,size_t,char const*) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_l3l4_hdr const*,size_t,char const*) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (struct i2400m*,struct i2400m_tlv_hdr const*,char const*) ;
 struct i2400m_tlv_hdr* FUNC_4 (struct i2400m*,int *,size_t,struct i2400m_tlv_hdr const*) ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static
void FUNC_6(struct i2400m *VAR_0,
         const struct i2400m_l3l4_hdr *VAR_1,
         size_t VAR_2, const char *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_0);
 const struct i2400m_tlv_hdr *VAR_5;
 size_t VAR_6 = FUNC_5(VAR_1->length);

 FUNC_1(4, VAR_4, "(i2400m %p, l3l4_hdr %p, size %zu, %s)\n",
    VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_5 = ((void*)0);

 while ((VAR_5 = FUNC_4(VAR_0, &VAR_1->pl,
          VAR_6, VAR_5)))
  FUNC_3(VAR_0, VAR_5, VAR_3);
 FUNC_0(4, VAR_4, "(i2400m %p, l3l4_hdr %p, size %zu, %s) = void\n",
  VAR_0, VAR_1, VAR_2, VAR_3);
}
