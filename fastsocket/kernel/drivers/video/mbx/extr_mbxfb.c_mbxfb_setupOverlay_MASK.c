
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbxfb_overlaySetup {int scaled_width; int scaled_height; int width; int height; int fmt; int Y_stride; int UV_stride; int U_offset; int V_offset; int mem_offset; scalar_t__ enable; int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static int FUNC_15(struct mbxfb_overlaySetup *VAR_35)
{
 u32 VAR_36, VAR_37, VAR_38;
 u32 VAR_39, VAR_40, VAR_41;
 u32 VAR_42, VAR_43;
 u32 VAR_44;

 if (VAR_35->scaled_width==0 || VAR_35->scaled_height==0)
  return -VAR_0;



 VAR_44 = FUNC_13(VAR_13);
 VAR_36 = FUNC_13(VAR_18);
 VAR_37 = FUNC_13(VAR_15);
 VAR_42 = FUNC_13(VAR_30);
 VAR_43 = FUNC_13(VAR_33);
 VAR_41 = FUNC_13(VAR_1);

 VAR_40 = FUNC_13(VAR_4);
 VAR_39 = FUNC_13(VAR_10);

 VAR_36 &= ~( FUNC_0(VAR_29) |
     FUNC_0(VAR_28) |
     FUNC_0(VAR_22) |
     VAR_21 | VAR_20 |
     VAR_19 );
 VAR_36 |= FUNC_10(VAR_35->width) | FUNC_9(VAR_35->height) |
    VAR_20;

 VAR_37 &= ~(VAR_16 | FUNC_0(VAR_17) );
 VAR_42 &= ~(VAR_32 | FUNC_0(VAR_31));
 VAR_43 &= ~(FUNC_0(VAR_34));

 switch (VAR_35->fmt) {
 case 128:
  VAR_36 |= VAR_27;

  VAR_35->Y_stride = ((VAR_35->width) + 0xf ) & ~0xf;
  break;
 case 129:
  VAR_36 |= VAR_27;

  VAR_35->Y_stride = ((VAR_35->width) + 0xf ) & ~0xf;
  VAR_42 |= VAR_32;

  break;
 case 133:
  VAR_36 |= VAR_23;
  VAR_35->Y_stride = (VAR_35->width*2 + 0xf ) & ~0xf;
  break;
 case 132:
  VAR_36 |= VAR_24;
  VAR_35->Y_stride = (VAR_35->width*2 + 0xf ) & ~0xf;
  break;
 case 131:
  VAR_36 |= VAR_25;
  VAR_35->Y_stride = (VAR_35->width*2 + 0xf ) & ~0xf;
  break;
 case 130:
  VAR_36 |= VAR_26;
  VAR_35->Y_stride = (VAR_35->width*2 + 0xf ) & ~0xf;
   break;
 default:
  return -VAR_0;
 }
 VAR_35->UV_stride = ((VAR_35->width/2) + 0x7 ) & ~0x7;
  VAR_35->U_offset = VAR_35->height * VAR_35->Y_stride;
  VAR_35->V_offset = VAR_35->U_offset +
      VAR_35->height * VAR_35->UV_stride;
 VAR_42 |= FUNC_11(
   (0x60000 + VAR_35->mem_offset + VAR_35->U_offset)>>3);
 VAR_43 |= FUNC_12(
   (0x60000 + VAR_35->mem_offset + VAR_35->V_offset)>>3);


 VAR_37 |= FUNC_8((0x60000 + VAR_35->mem_offset)>>4);

 if (VAR_35->enable)
  VAR_37 |= VAR_16;


 VAR_38 = FUNC_5((VAR_35->Y_stride)/16-1) |
  FUNC_6(VAR_35->x) | FUNC_7(VAR_35->y);

 VAR_39 &= ~(FUNC_0(VAR_12) | FUNC_0(VAR_11));
 VAR_39 = FUNC_4(VAR_35->scaled_width-1) |
   FUNC_3(VAR_35->scaled_height-1);

 VAR_40 &= ~(VAR_6 | VAR_9 |
   VAR_5 | VAR_8 |
   FUNC_0(VAR_7));
 VAR_40 |= FUNC_2((VAR_35->height<<11)/VAR_35->scaled_height);


 if (VAR_35->scaled_width == VAR_35->width)
  VAR_40 |= VAR_6;
 if (VAR_35->scaled_height == VAR_35->height)
  VAR_40 |= VAR_9;

 VAR_41 &= ~(FUNC_0(VAR_3) | VAR_2);
 VAR_41 |= FUNC_1((VAR_35->width<<11)/VAR_35->scaled_width);


 FUNC_14(VAR_36, VAR_18);
 FUNC_14(VAR_37, VAR_15);
 FUNC_14(VAR_42, VAR_30);
 FUNC_14(VAR_43, VAR_33);
 FUNC_14(VAR_38, VAR_14);


 FUNC_14(VAR_39, VAR_10);
 FUNC_14(VAR_40, VAR_4);
 FUNC_14(VAR_41, VAR_1);


 if (VAR_35->enable)
  VAR_44 |= 1;
 else
  VAR_44 &= ~1;

 FUNC_14(VAR_44, VAR_13);

 return 0;
}
