
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipath_portdata {int port_head; scalar_t__ port_seq_cnt; scalar_t__ port_rcvhdrq; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int ipath_flags; int ipath_rhf_offset; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipath_portdata const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline u32 FUNC_2(const struct ipath_portdata *VAR_1)
{
 const struct ipath_devdata *VAR_2 = VAR_1->port_dd;
 u32 VAR_3;

 if (VAR_2->ipath_flags & VAR_0) {
  __le32 *VAR_4;
  u32 VAR_5;

  VAR_4 = (__le32 *) VAR_1->port_rcvhdrq +
   VAR_1->port_head + VAR_2->ipath_rhf_offset;
  VAR_5 = FUNC_1(VAR_4);
  VAR_3 = VAR_1->port_head;
  if (VAR_5 == VAR_1->port_seq_cnt)
   VAR_3++;
 } else
  VAR_3 = FUNC_0(VAR_1);

 return VAR_3;
}
