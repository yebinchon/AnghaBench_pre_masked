
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_portdata {int poll_type; scalar_t__ port_hdrqfull; scalar_t__ port_hdrqfull_poll; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned FUNC_0(struct ipath_portdata *VAR_3)
{
 unsigned VAR_4 = 0;

 if ((VAR_3->poll_type & VAR_0) &&
     VAR_3->port_hdrqfull != VAR_3->port_hdrqfull_poll) {
  VAR_4 |= VAR_1 | VAR_2;
  VAR_3->port_hdrqfull_poll = VAR_3->port_hdrqfull;
 }

 return VAR_4;
}
