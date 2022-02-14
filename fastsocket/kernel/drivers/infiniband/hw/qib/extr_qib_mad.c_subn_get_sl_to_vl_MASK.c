
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_ibport {int port_cap_flags; int* sl_to_vl; } ;
struct ib_smp {int status; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ib_smp*) ;
 struct qib_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_smp *VAR_2, struct ib_device *VAR_3,
        u8 VAR_4)
{
 struct qib_ibport *VAR_5 = FUNC_3(VAR_3, VAR_4);
 u8 *VAR_6 = (u8 *) VAR_2->data;
 unsigned VAR_7;

 FUNC_1(VAR_2->data, 0, sizeof(VAR_2->data));

 if (!(VAR_5->port_cap_flags & VAR_0))
  VAR_2->status |= VAR_1;
 else
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->sl_to_vl); VAR_7 += 2)
   *VAR_6++ = (VAR_5->sl_to_vl[VAR_7] << 4) | VAR_5->sl_to_vl[VAR_7 + 1];

 return FUNC_2(VAR_2);
}
