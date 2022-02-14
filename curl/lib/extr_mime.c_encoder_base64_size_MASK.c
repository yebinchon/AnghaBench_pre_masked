
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int curl_off_t ;
struct TYPE_3__ {int datasize; } ;
typedef TYPE_1__ curl_mimepart ;


 int VAR_0 ;

__attribute__((used)) static curl_off_t FUNC_0(curl_mimepart *VAR_1)
{
  curl_off_t VAR_2 = VAR_1->datasize;

  if(VAR_2 <= 0)
    return VAR_2;


  VAR_2 = 4 * (1 + (VAR_2 - 1) / 3);


  return VAR_2 + 2 * ((VAR_2 - 1) / VAR_0);
}
