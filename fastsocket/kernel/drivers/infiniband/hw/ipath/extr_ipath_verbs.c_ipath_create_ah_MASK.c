
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_ibdev {scalar_t__ n_ahs_allocated; int n_ahs_lock; } ;
struct ib_ah {int dummy; } ;
struct ib_ah_attr {scalar_t__ dlid; int ah_flags; int port_num; int static_rate; } ;
struct ipath_ah {struct ib_ah ibah; struct ib_ah_attr attr; } ;
struct ib_pd {TYPE_1__* device; } ;
struct TYPE_2__ {int phys_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ah* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipath_ah*) ;
 struct ipath_ah* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct ipath_ibdev* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static struct ib_ah *FUNC_7(struct ib_pd *VAR_7,
         struct ib_ah_attr *VAR_8)
{
 struct ipath_ah *VAR_9;
 struct ib_ah *VAR_10;
 struct ipath_ibdev *VAR_11 = FUNC_6(VAR_7->device);
 unsigned long VAR_12;


 if (VAR_8->dlid >= VAR_4 &&
     VAR_8->dlid != VAR_5 &&
     !(VAR_8->ah_flags & VAR_3)) {
  VAR_10 = FUNC_0(-VAR_0);
  goto bail;
 }

 if (VAR_8->dlid == 0) {
  VAR_10 = FUNC_0(-VAR_0);
  goto bail;
 }

 if (VAR_8->port_num < 1 ||
     VAR_8->port_num > VAR_7->device->phys_port_cnt) {
  VAR_10 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_2);
 if (!VAR_9) {
  VAR_10 = FUNC_0(-VAR_1);
  goto bail;
 }

 FUNC_4(&VAR_11->n_ahs_lock, VAR_12);
 if (VAR_11->n_ahs_allocated == VAR_6) {
  FUNC_5(&VAR_11->n_ahs_lock, VAR_12);
  FUNC_2(VAR_9);
  VAR_10 = FUNC_0(-VAR_1);
  goto bail;
 }

 VAR_11->n_ahs_allocated++;
 FUNC_5(&VAR_11->n_ahs_lock, VAR_12);


 VAR_9->attr = *VAR_8;
 VAR_9->attr.static_rate = FUNC_1(VAR_8->static_rate);

 VAR_10 = &VAR_9->ibah;

bail:
 return VAR_10;
}
