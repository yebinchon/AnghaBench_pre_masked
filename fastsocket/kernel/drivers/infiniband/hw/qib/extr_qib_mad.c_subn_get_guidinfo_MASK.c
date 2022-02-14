
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qib_ibport {scalar_t__* guids; } ;
struct qib_pportdata {scalar_t__ guid; struct qib_ibport ibport_data; } ;
struct qib_devdata {unsigned int num_pports; struct qib_pportdata* pport; } ;
struct ib_smp {int status; scalar_t__ data; int attr_mod; } ;
struct ib_device {int dummy; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 struct qib_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_4(struct ib_smp *VAR_2, struct ib_device *VAR_3,
        u8 VAR_4)
{
 struct qib_devdata *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = 8 * FUNC_0(VAR_2->attr_mod);
 __be64 *VAR_7 = (__be64 *) VAR_2->data;
 unsigned VAR_8 = VAR_4 - 1;



 FUNC_2(VAR_2->data, 0, sizeof(VAR_2->data));

 if (VAR_6 == 0 && VAR_8 < VAR_5->num_pports) {
  struct qib_pportdata *VAR_9 = VAR_5->pport + VAR_8;
  struct qib_ibport *VAR_10 = &VAR_9->ibport_data;
  __be64 VAR_11 = VAR_9->guid;
  unsigned VAR_12;


  if (VAR_11 == 0)
   VAR_2->status |= VAR_0;
  else {

   VAR_7[0] = VAR_11;
   for (VAR_12 = 1; VAR_12 < VAR_1; VAR_12++)
    VAR_7[VAR_12] = VAR_10->guids[VAR_12 - 1];
  }
 } else
  VAR_2->status |= VAR_0;

 return FUNC_3(VAR_2);
}
