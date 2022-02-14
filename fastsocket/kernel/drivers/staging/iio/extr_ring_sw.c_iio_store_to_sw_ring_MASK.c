
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int length; int bpd; TYPE_2__ shared_ev_pointer; int ev_int; } ;
struct iio_sw_ring_buffer {unsigned char* write_p; unsigned char* data; unsigned char* half_p; unsigned char* last_written_p; unsigned char* read_p; TYPE_1__ buf; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct iio_sw_ring_buffer *VAR_2,
    unsigned char *VAR_3,
    s64 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 unsigned char *VAR_7, *VAR_8;


 if (FUNC_6(VAR_2->write_p == 0)) {
  VAR_2->write_p = VAR_2->data;




  VAR_2->half_p = VAR_2->data - VAR_2->buf.length*VAR_2->buf.bpd/2;
 }

 FUNC_3(VAR_2->write_p, VAR_3, VAR_2->buf.bpd);
 FUNC_1();




 VAR_2->last_written_p = VAR_2->write_p;
 FUNC_1();



 VAR_7 = VAR_2->write_p + VAR_2->buf.bpd;

 if (VAR_7 == VAR_2->data + VAR_2->buf.length*VAR_2->buf.bpd)
  VAR_7 = VAR_2->data;





 VAR_2->write_p = VAR_7;

 if (VAR_2->read_p == 0)
  VAR_2->read_p = VAR_2->data;






 else if (VAR_2->write_p == VAR_2->read_p) {
  VAR_8 = VAR_2->read_p;
  VAR_7 = VAR_8 + VAR_2->buf.bpd;
  if (VAR_7
      == VAR_2->data + VAR_2->buf.length*VAR_2->buf.bpd) {
   VAR_7 = VAR_2->data;
  }



  if (VAR_8 == VAR_2->read_p)
   VAR_2->read_p = VAR_7;

  FUNC_4(&VAR_2->buf.shared_ev_pointer.lock);

  VAR_5 = FUNC_2(&VAR_2->buf,
             VAR_0,
             VAR_4);
  FUNC_5(&VAR_2->buf.shared_ev_pointer.lock);
  if (VAR_5)
   goto error_ret;
 }




 VAR_2->half_p += VAR_2->buf.bpd;
 if (VAR_2->half_p == VAR_2->data + VAR_2->buf.length*VAR_2->buf.bpd)
  VAR_2->half_p = VAR_2->data;
 if (VAR_2->half_p == VAR_2->read_p) {
  FUNC_4(&VAR_2->buf.shared_ev_pointer.lock);
  VAR_6 = VAR_1;
  VAR_5 = FUNC_0(&VAR_2->buf.ev_int,
           VAR_6,
           VAR_4,
           &VAR_2->buf.shared_ev_pointer);
  FUNC_5(&VAR_2->buf.shared_ev_pointer.lock);
 }
error_ret:
 return VAR_5;
}
