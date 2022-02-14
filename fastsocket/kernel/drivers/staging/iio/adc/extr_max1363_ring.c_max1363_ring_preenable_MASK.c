
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct max1363_state {TYPE_2__* current_mode; } ;
struct iio_dev {TYPE_3__* ring; struct max1363_state* dev_data; } ;
typedef int s64 ;
struct TYPE_4__ {int (* set_bpd ) (TYPE_3__*,size_t) ;} ;
struct TYPE_6__ {TYPE_1__ access; } ;
struct TYPE_5__ {int numvals; } ;


 int FUNC_0 (TYPE_3__*,size_t) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0)
{
 struct max1363_state *VAR_1 = VAR_0->dev_data;
 size_t VAR_2;

 if (VAR_0->ring->access.set_bpd) {
  VAR_2 = VAR_1->current_mode->numvals*2 + sizeof(s64);
  if (VAR_2 % 8)
   VAR_2 += 8 - (VAR_2 % 8);
  VAR_0->ring->access.set_bpd(VAR_0->ring, VAR_2);
 }

 return 0;
}
