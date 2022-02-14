
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sclp_req {int callback_data; int (* callback ) (struct sclp_req*,int ) ;int status; int list; } ;
typedef int __u16 ;
struct TYPE_2__ {int ext_params; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct sclp_req* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sclp_req*,int ) ;

__attribute__((used)) static void
FUNC_8(__u16 VAR_9)
{
 struct sclp_req *VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_5(&VAR_4);
 VAR_11 = VAR_0.ext_params & 0xfffffff8;
 VAR_12 = VAR_0.ext_params & 0x3;
 if (VAR_11) {
  FUNC_2(&VAR_5);
  VAR_6 = VAR_8;
  VAR_10 = FUNC_0(VAR_11);
  if (VAR_10) {

   FUNC_3(&VAR_10->list);
   VAR_10->status = VAR_1;
   if (VAR_10->callback) {
    FUNC_6(&VAR_4);
    VAR_10->callback(VAR_10, VAR_10->callback_data);
    FUNC_5(&VAR_4);
   }
  }
  VAR_6 = VAR_7;
 }
 if (VAR_12 &&
     VAR_2 == VAR_3)
  FUNC_1();
 FUNC_6(&VAR_4);
 FUNC_4();
}
