
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qib_ibport {int * guids; } ;
struct qib_pportdata {struct qib_ibport ibport_data; } ;
struct qib_devdata {unsigned int num_pports; struct qib_pportdata* pport; } ;
struct ib_smp {int status; scalar_t__ data; int attr_mod; } ;
struct ib_device {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 struct qib_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_smp*,struct ib_device*,int) ;

__attribute__((used)) static int FUNC_3(struct ib_smp *VAR_2, struct ib_device *VAR_3,
        u8 VAR_4)
{
 struct qib_devdata *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = 8 * FUNC_0(VAR_2->attr_mod);
 __be64 *VAR_7 = (__be64 *) VAR_2->data;
 unsigned VAR_8 = VAR_4 - 1;



 if (VAR_6 == 0 && VAR_8 < VAR_5->num_pports) {
  struct qib_pportdata *VAR_9 = VAR_5->pport + VAR_8;
  struct qib_ibport *VAR_10 = &VAR_9->ibport_data;
  unsigned VAR_11;


  for (VAR_11 = 1; VAR_11 < VAR_1; VAR_11++)
   VAR_10->guids[VAR_11 - 1] = VAR_7[VAR_11];
 } else
  VAR_2->status |= VAR_0;


 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
