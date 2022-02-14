
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_data {int response_received; int easy_handle; scalar_t__ paused; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_1, size_t VAR_2, size_t VAR_3,
                             void *VAR_4)
{
  struct cb_data *VAR_5 = (struct cb_data *)VAR_4;
  size_t VAR_6 = VAR_3 * VAR_2;


  (void)VAR_1;


  VAR_5->response_received = 1;

  if(VAR_5->paused) {

    VAR_5->paused = 0;
    FUNC_0(VAR_5->easy_handle, VAR_0);
  }

  return VAR_6;
}
